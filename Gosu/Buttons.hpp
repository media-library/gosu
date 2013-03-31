#ifndef GOSU_BUTTONSWIN_HPP
#define GOSU_BUTTONSWIN_HPP

namespace Gosu
{
    //! List of button ids that can be used with Gosu::Input.
    //! This enumeration contains ids for keyboard keys (kb*),
    //! mouse buttons and mouse wheel (ms*) and gamepad buttons (gp*).
    enum ButtonName
	{
        kbRangeBegin = 0x00,
		kbEscape = 0x01,
		kbF1 = 0x3b,
		kbF2 = 0x3c,
		kbF3 = 0x3d,
		kbF4 = 0x3e,
		kbF5 = 0x3f,
		kbF6 = 0x40,
		kbF7 = 0x41,
		kbF8 = 0x42,
		kbF9 = 0x43,
		kbF10 = 0x44,
		kbF11 = 0x57,
		kbF12 = 0x58,
		kb0 = 0x0b,
		kb1 = 0x02,
		kb2 = 0x03,
		kb3 = 0x04,
		kb4 = 0x05,
		kb5 = 0x06,
		kb6 = 0x07,
		kb7 = 0x08,
		kb8 = 0x09,
		kb9 = 0x0a,
		kbTab = 0x0f,
		kbReturn = 0x1c,
		kbSpace = 0x39,
		kbLeftShift = 0x2a,
		kbRightShift = 0x36,
		kbLeftControl = 0x1d,
		kbRightControl = 0x9d,
		kbLeftAlt = 0x38,
		kbRightAlt = 0xb8,
		kbLeftMeta = 0xdb,
		kbRightMeta = 0xdc,
		kbBackspace = 0x0e,
		kbLeft = 0xcb,
		kbRight = 0xcd,
		kbUp = 0xc8,
		kbDown = 0xd0,
		kbHome = 0xc7,
		kbEnd = 0xcf,
		kbInsert = 0xd2,
		kbDelete = 0xd3,
		kbPageUp = 0xc9,
		kbPageDown = 0xd1,
		kbEnter = 0x9c,
		kbA = 0x1e,
		kbB = 0x30,
		kbC = 0x2e,
		kbD = 0x20,
		kbE = 0x12,
		kbF = 0x21,
		kbG = 0x22,
		kbH = 0x23,
		kbI = 0x17,
		kbJ = 0x24,
		kbK = 0x25,
		kbL = 0x26,
		kbM = 0x32,
		kbN = 0x31,
		kbO = 0x18,
		kbP = 0x19,
		kbQ = 0x10,
		kbR = 0x13,
		kbS = 0x1f,
		kbT = 0x14,
		kbU = 0x16,
		kbV = 0x2f,
		kbW = 0x11,
		kbX = 0x2d,
		kbY = 0x15,
		kbZ = 0x2c,
		kbNumpad0 = 0x52,
		kbNumpad1 = 0x4f,
		kbNumpad2 = 0x50,
		kbNumpad3 = 0x51,
		kbNumpad4 = 0x4b,
		kbNumpad5 = 0x4c,
		kbNumpad6 = 0x4d,
		kbNumpad7 = 0x47,
		kbNumpad8 = 0x48,
		kbNumpad9 = 0x49,
		kbNumpadAdd = 0x4e,
		kbNumpadSubtract = 0x4a,
		kbNumpadMultiply = 0x37,
		kbNumpadDivide = 0xb5,
		kbRangeEnd = 0xff,

        msRangeBegin,
        msLeft = msRangeBegin,
        msRight,
        msMiddle,
        msWheelUp,
        msWheelDown,
        msRangeEnd,
        
        gpRangeBegin,
        gpLeft = gpRangeBegin,
        gpRight,
        gpUp,
        gpDown,
        gpButton0,
        gpButton1,
        gpButton2,
        gpButton3,
        gpButton4,
        gpButton5,
        gpButton6,
        gpButton7,
        gpButton8,
        gpButton9,
        gpButton10,
        gpButton11,
        gpButton12,
        gpButton13,
        gpButton14,
        gpButton15,

        gp0Left,
        gp0Right,
        gp0Up,
        gp0Down,
        gp0Button0,
        gp0Button1,
        gp0Button2,
        gp0Button3,
        gp0Button4,
        gp0Button5,
        gp0Button6,
        gp0Button7,
        gp0Button8,
        gp0Button9,
        gp0Button10,
        gp0Button11,
        gp0Button12,
        gp0Button13,
        gp0Button14,
        gp0Button15,
        
        gp1Left,
        gp1Right,
        gp1Up,
        gp1Down,
        gp1Button0,
        gp1Button1,
        gp1Button2,
        gp1Button3,
        gp1Button4,
        gp1Button5,
        gp1Button6,
        gp1Button7,
        gp1Button8,
        gp1Button9,
        gp1Button10,
        gp1Button11,
        gp1Button12,
        gp1Button13,
        gp1Button14,
        gp1Button15,
        
        gp2Left,
        gp2Right,
        gp2Up,
        gp2Down,
        gp2Button0,
        gp2Button1,
        gp2Button2,
        gp2Button3,
        gp2Button4,
        gp2Button5,
        gp2Button6,
        gp2Button7,
        gp2Button8,
        gp2Button9,
        gp2Button10,
        gp2Button11,
        gp2Button12,
        gp2Button13,
        gp2Button14,
        gp2Button15,
        
        gp3Left,
        gp3Right,
        gp3Up,
        gp3Down,
        gp3Button0,
        gp3Button1,
        gp3Button2,
        gp3Button3,
        gp3Button4,
        gp3Button5,
        gp3Button6,
        gp3Button7,
        gp3Button8,
        gp3Button9,
        gp3Button10,
        gp3Button11,
        gp3Button12,
        gp3Button13,
        gp3Button14,
        gp3Button15,
        
        gpRangeEnd = gp3Button15,
        
        numButtons = gpRangeEnd + 1,
        numGamepads = 4,
        noButton = 0xffffffff,
        
        kbNum = kbRangeEnd - kbRangeBegin + 1,
        msNum = msRangeEnd - msRangeBegin + 1,
        gpNum = gpRangeEnd - gpRangeBegin + 1,
        gpNumPerGamepad = gpNum / (numGamepads + 1),
	};
}

#endif