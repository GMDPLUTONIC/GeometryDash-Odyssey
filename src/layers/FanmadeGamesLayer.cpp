#include "FanmadeGamesLayer.hpp"
#include "FanmadeGamesCell.hpp"
#include "FanmadeGamesCell.hpp"
#include "../nodes/OdysseyFangamePopup.hpp"

void FanmadeGamesLayer::customSetup()
{
    m_games = CCArray::create();

    //  Nexitron
    auto game_01 = FanmadeGamesCell::create("Promo_GDNX.png"_spr, this, menu_selector(FanmadeGamesLayer::onNexitron));

    //  Time Reborn
    auto game_02 = FanmadeGamesCell::create("Promo_GDTR.png"_spr, this, menu_selector(FanmadeGamesLayer::onTimeReborn));

    //  Mega World
    auto game_03 = FanmadeGamesCell::create("Promo_GDMW.png"_spr, this, menu_selector(FanmadeGamesLayer::onMegaWorld));

    //  Unnamed GDPS
    auto game_04 = FanmadeGamesCell::create("Promo_UGDPS.png"_spr, this, menu_selector(FanmadeGamesLayer::onUnnamed));

    //  Lightsync
    auto game_05 = FanmadeGamesCell::create("Promo_LIGHT.png"_spr, this, menu_selector(FanmadeGamesLayer::onLight));

    //  GDNA
    auto game_06 = FanmadeGamesCell::create("Promo_GDNA.png"_spr, this, menu_selector(FanmadeGamesLayer::onAdventure));

    //  GDBreeze

    auto game_07 = FanmadeGamesCell::create("Promo_GDBreeze.png"_spr, this, menu_selector(FanmadeGamesLayer::OnBreeze));

    m_games->addObject(game_01);
    m_games->addObject(game_02);
    m_games->addObject(game_03);
    m_games->addObject(game_04);
    m_games->addObject(game_05);
    m_games->addObject(game_06);
    m_games->addObject(game_07);

    auto *listView = ListView::create(m_games, 118.0f);
    m_listLayer->addChild(listView);
};

void FanmadeGamesLayer::onNexitron(CCObject *sender)
{
    auto popup = OdysseyFangamePopup::create("Popup_GDNX.png"_spr, "https://gamejolt.com/games/nexitron/797397");
    popup->setButtonText("Download on Gamejolt!");
    popup->show();
};

void FanmadeGamesLayer::onTimeReborn(CCObject *sender)
{
    auto popup = OdysseyFangamePopup::create("Popup_GDTR.png"_spr, "https://gamejolt.com/games/timereborn/908956");
    popup->setButtonText("Download on Gamejolt!");
    popup->show();
};

void FanmadeGamesLayer::onMegaWorld(CCObject *sender)
{
    auto popup = OdysseyFangamePopup::create("Popup_GDMW.png"_spr, "https://www.youtube.com/watch?v=5XNSWryOhV4&list=PLv_H3yhLON9FY0okZ0cYIIEppZXvRkPIz");
    popup->setButtonText("Check the Trailer!");
    popup->show();
};

void FanmadeGamesLayer::onUnnamed(CCObject *sender)
{
    auto popup = OdysseyFangamePopup::create("Popup_UGDPS.png"_spr, "https://discord.gg/EHMUfj6EE2?event=1313001542730907770");
    popup->setButtonText("Join the Discord Server!");
    popup->show();
};

void FanmadeGamesLayer::onLight(CCObject *sender)
{
    auto popup = OdysseyFangamePopup::create("Popup_LIGHT.png"_spr, "https://discord.com/invite/mvbjWdC6cF");
    popup->setButtonText("Join the Discord Server!");
    popup->show();
};

void FanmadeGamesLayer::onAdventure(CCObject *sender)
{
    auto popup = OdysseyFangamePopup::create("Popup_GDNA.png"_spr, "https://discord.gg/SYWfGKY4nu");
    popup->setButtonText("Join the Discord Server!");
    popup->show();
};

void FanmadeGamesLayer::onBreeze(CCObject *sender)
{
    auto popup = OdysseyFangamePopup::create("Popup_GDBreeze.png"_spr, "https://gamejolt.com/games/Geometrydashbreeze/825011");
    popup->setButtonText("Download On Gamejolt!")
    popup->show();

FanmadeGamesLayer *FanmadeGamesLayer::create()
{
    auto ret = new FanmadeGamesLayer();

    if (ret->init("More Fangames"))
    {
        ret->autorelease();
        return ret;
    }

    delete ret;
    return nullptr;
};
