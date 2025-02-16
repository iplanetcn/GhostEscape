#include "sprite.h"

Texture::Texture(const std::string &file_path)
{
    texture = Game::GetInstance().getAssetStore()->getImage(file_path);
    SDL_GetTextureSize(texture, &src_rect.w, &src_rect.h);
}


void Sprite::render()
{
    if (texture_.texture == nullptr)
    {
        return;
    }
    if (parrent_ == nullptr)
    {
        return;
    }
    auto pos = parrent_->getRenderPosition() + offset_;
    game_.renderTexture(texture_, pos, size_);   //解耦
}

void Sprite::setTexture(const Texture &texture)
{
    texture_ = texture;
    size_ = glm::vec2(texture.src_rect.w, texture.src_rect.h);
}