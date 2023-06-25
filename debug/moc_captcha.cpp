/****************************************************************************
** Meta object code from reading C++ file 'captcha.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../captcha.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'captcha.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Captcha_t {
    QByteArrayData data[64];
    char stringdata0[832];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Captcha_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Captcha_t qt_meta_stringdata_Captcha = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Captcha"
QT_MOC_LITERAL(1, 8, 16), // "catpchaGenerated"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 3), // "img"
QT_MOC_LITERAL(4, 30, 4), // "text"
QT_MOC_LITERAL(5, 35, 7), // "setFont"
QT_MOC_LITERAL(6, 43, 3), // "arg"
QT_MOC_LITERAL(7, 47, 18), // "setDeformationType"
QT_MOC_LITERAL(8, 66, 10), // "DeformType"
QT_MOC_LITERAL(9, 77, 13), // "updateCaptcha"
QT_MOC_LITERAL(10, 91, 9), // "randomize"
QT_MOC_LITERAL(11, 101, 12), // "generateText"
QT_MOC_LITERAL(12, 114, 9), // "noOfChars"
QT_MOC_LITERAL(13, 124, 14), // "includeNumbers"
QT_MOC_LITERAL(14, 139, 14), // "includeSymbols"
QT_MOC_LITERAL(15, 154, 10), // "allCapital"
QT_MOC_LITERAL(16, 165, 14), // "setCaptchaText"
QT_MOC_LITERAL(17, 180, 17), // "setTextGeneration"
QT_MOC_LITERAL(18, 198, 18), // "TextGenerationMode"
QT_MOC_LITERAL(19, 217, 13), // "setDictionary"
QT_MOC_LITERAL(20, 231, 14), // "loadDictionary"
QT_MOC_LITERAL(21, 246, 8), // "FileName"
QT_MOC_LITERAL(22, 255, 12), // "setFontColor"
QT_MOC_LITERAL(23, 268, 12), // "setBackColor"
QT_MOC_LITERAL(24, 281, 12), // "setSinDeform"
QT_MOC_LITERAL(25, 294, 10), // "hAmplitude"
QT_MOC_LITERAL(26, 305, 10), // "hFrequency"
QT_MOC_LITERAL(27, 316, 10), // "vAmplitude"
QT_MOC_LITERAL(28, 327, 10), // "vFrequency"
QT_MOC_LITERAL(29, 338, 15), // "generateCaptcha"
QT_MOC_LITERAL(30, 354, 21), // "QPair<QString,QImage>"
QT_MOC_LITERAL(31, 376, 12), // "setDrawLines"
QT_MOC_LITERAL(32, 389, 15), // "setDrawEllipses"
QT_MOC_LITERAL(33, 405, 12), // "setDrawNoise"
QT_MOC_LITERAL(34, 418, 13), // "setNoiseCount"
QT_MOC_LITERAL(35, 432, 12), // "setLineCount"
QT_MOC_LITERAL(36, 445, 15), // "setEllipseCount"
QT_MOC_LITERAL(37, 461, 12), // "setLineWidth"
QT_MOC_LITERAL(38, 474, 19), // "setEllipseMinRadius"
QT_MOC_LITERAL(39, 494, 19), // "setEllipseMaxRadius"
QT_MOC_LITERAL(40, 514, 17), // "setNoisePointSize"
QT_MOC_LITERAL(41, 532, 13), // "setDifficulty"
QT_MOC_LITERAL(42, 546, 3), // "val"
QT_MOC_LITERAL(43, 550, 4), // "font"
QT_MOC_LITERAL(44, 555, 12), // "captchaImage"
QT_MOC_LITERAL(45, 568, 11), // "captchaText"
QT_MOC_LITERAL(46, 580, 15), // "deformationType"
QT_MOC_LITERAL(47, 596, 14), // "textGeneration"
QT_MOC_LITERAL(48, 611, 10), // "dictionary"
QT_MOC_LITERAL(49, 622, 9), // "fontColor"
QT_MOC_LITERAL(50, 632, 9), // "backColor"
QT_MOC_LITERAL(51, 642, 9), // "drawLines"
QT_MOC_LITERAL(52, 652, 12), // "drawEllipses"
QT_MOC_LITERAL(53, 665, 9), // "drawNoise"
QT_MOC_LITERAL(54, 675, 10), // "noiseCount"
QT_MOC_LITERAL(55, 686, 9), // "lineCount"
QT_MOC_LITERAL(56, 696, 12), // "ellipseCount"
QT_MOC_LITERAL(57, 709, 9), // "lineWidth"
QT_MOC_LITERAL(58, 719, 16), // "ellipseMinRadius"
QT_MOC_LITERAL(59, 736, 16), // "ellipseMaxRadius"
QT_MOC_LITERAL(60, 753, 14), // "noisePointSize"
QT_MOC_LITERAL(61, 768, 15), // "Deform_SinCurve"
QT_MOC_LITERAL(62, 784, 21), // "TextGeneration_Random"
QT_MOC_LITERAL(63, 806, 25) // "TextGeneration_Dictionary"

    },
    "Captcha\0catpchaGenerated\0\0img\0text\0"
    "setFont\0arg\0setDeformationType\0"
    "DeformType\0updateCaptcha\0randomize\0"
    "generateText\0noOfChars\0includeNumbers\0"
    "includeSymbols\0allCapital\0setCaptchaText\0"
    "setTextGeneration\0TextGenerationMode\0"
    "setDictionary\0loadDictionary\0FileName\0"
    "setFontColor\0setBackColor\0setSinDeform\0"
    "hAmplitude\0hFrequency\0vAmplitude\0"
    "vFrequency\0generateCaptcha\0"
    "QPair<QString,QImage>\0setDrawLines\0"
    "setDrawEllipses\0setDrawNoise\0setNoiseCount\0"
    "setLineCount\0setEllipseCount\0setLineWidth\0"
    "setEllipseMinRadius\0setEllipseMaxRadius\0"
    "setNoisePointSize\0setDifficulty\0val\0"
    "font\0captchaImage\0captchaText\0"
    "deformationType\0textGeneration\0"
    "dictionary\0fontColor\0backColor\0drawLines\0"
    "drawEllipses\0drawNoise\0noiseCount\0"
    "lineCount\0ellipseCount\0lineWidth\0"
    "ellipseMinRadius\0ellipseMaxRadius\0"
    "noisePointSize\0Deform_SinCurve\0"
    "TextGeneration_Random\0TextGeneration_Dictionary"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Captcha[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
      18,  258, // properties
       2,  312, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  159,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,  164,    2, 0x0a /* Public */,
       7,    1,  167,    2, 0x0a /* Public */,
       9,    0,  170,    2, 0x0a /* Public */,
      10,    0,  171,    2, 0x0a /* Public */,
      11,    4,  172,    2, 0x0a /* Public */,
      11,    3,  181,    2, 0x2a /* Public | MethodCloned */,
      11,    2,  188,    2, 0x2a /* Public | MethodCloned */,
      11,    1,  193,    2, 0x2a /* Public | MethodCloned */,
      11,    0,  196,    2, 0x2a /* Public | MethodCloned */,
      16,    1,  197,    2, 0x0a /* Public */,
      17,    1,  200,    2, 0x0a /* Public */,
      19,    1,  203,    2, 0x0a /* Public */,
      20,    1,  206,    2, 0x0a /* Public */,
      22,    1,  209,    2, 0x0a /* Public */,
      23,    1,  212,    2, 0x0a /* Public */,
      24,    4,  215,    2, 0x0a /* Public */,
      29,    0,  224,    2, 0x0a /* Public */,
      31,    1,  225,    2, 0x0a /* Public */,
      32,    1,  228,    2, 0x0a /* Public */,
      33,    1,  231,    2, 0x0a /* Public */,
      34,    1,  234,    2, 0x0a /* Public */,
      35,    1,  237,    2, 0x0a /* Public */,
      36,    1,  240,    2, 0x0a /* Public */,
      37,    1,  243,    2, 0x0a /* Public */,
      38,    1,  246,    2, 0x0a /* Public */,
      39,    1,  249,    2, 0x0a /* Public */,
      40,    1,  252,    2, 0x0a /* Public */,
      41,    1,  255,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QFont,    6,
    QMetaType::Void, 0x80000000 | 8,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   12,   13,   14,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,   12,   13,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   12,   13,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 18,    6,
    QMetaType::Void, QMetaType::QStringList,    6,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QColor,    6,
    QMetaType::Void, QMetaType::QColor,    6,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,   25,   26,   27,   28,
    0x80000000 | 30,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,   42,

 // properties: name, type, flags
      43, QMetaType::QFont, 0x00095103,
      44, QMetaType::QImage, 0x00095001,
      45, QMetaType::QString, 0x00095103,
      46, 0x80000000 | 8, 0x0009510b,
      47, 0x80000000 | 18, 0x0009510b,
      48, QMetaType::QStringList, 0x00095103,
      49, QMetaType::QColor, 0x00095103,
      50, QMetaType::QColor, 0x00095103,
      51, QMetaType::Bool, 0x00095103,
      52, QMetaType::Bool, 0x00095103,
      53, QMetaType::Bool, 0x00095103,
      54, QMetaType::Int, 0x00095103,
      55, QMetaType::Int, 0x00095103,
      56, QMetaType::Int, 0x00095103,
      57, QMetaType::Int, 0x00095103,
      58, QMetaType::Int, 0x00095103,
      59, QMetaType::Int, 0x00095103,
      60, QMetaType::Int, 0x00095103,

 // enums: name, alias, flags, count, data
       8,    8, 0x0,    1,  322,
      18,   18, 0x0,    2,  324,

 // enum data: key, value
      61, uint(Captcha::Deform_SinCurve),
      62, uint(Captcha::TextGeneration_Random),
      63, uint(Captcha::TextGeneration_Dictionary),

       0        // eod
};

void Captcha::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Captcha *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->catpchaGenerated((*reinterpret_cast< const QImage(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->setFont((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 2: _t->setDeformationType((*reinterpret_cast< DeformType(*)>(_a[1]))); break;
        case 3: _t->updateCaptcha(); break;
        case 4: _t->randomize(); break;
        case 5: _t->generateText((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 6: _t->generateText((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 7: _t->generateText((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->generateText((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->generateText(); break;
        case 10: _t->setCaptchaText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->setTextGeneration((*reinterpret_cast< TextGenerationMode(*)>(_a[1]))); break;
        case 12: _t->setDictionary((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 13: _t->loadDictionary((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->setFontColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 15: _t->setBackColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 16: _t->setSinDeform((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4]))); break;
        case 17: { QPair<QString,QImage> _r = _t->generateCaptcha();
            if (_a[0]) *reinterpret_cast< QPair<QString,QImage>*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->setDrawLines((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->setDrawEllipses((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->setDrawNoise((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->setNoiseCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->setLineCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->setEllipseCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->setLineWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->setEllipseMinRadius((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->setEllipseMaxRadius((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->setNoisePointSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->setDifficulty((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Captcha::*)(const QImage & , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Captcha::catpchaGenerated)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Captcha *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QFont*>(_v) = _t->font(); break;
        case 1: *reinterpret_cast< QImage*>(_v) = _t->captchaImage(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->captchaText(); break;
        case 3: *reinterpret_cast< DeformType*>(_v) = _t->deformationType(); break;
        case 4: *reinterpret_cast< TextGenerationMode*>(_v) = _t->textGeneration(); break;
        case 5: *reinterpret_cast< QStringList*>(_v) = _t->dictionary(); break;
        case 6: *reinterpret_cast< QColor*>(_v) = _t->fontColor(); break;
        case 7: *reinterpret_cast< QColor*>(_v) = _t->backColor(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->drawLines(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->drawEllipses(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->drawNoise(); break;
        case 11: *reinterpret_cast< int*>(_v) = _t->noiseCount(); break;
        case 12: *reinterpret_cast< int*>(_v) = _t->lineCount(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->ellipseCount(); break;
        case 14: *reinterpret_cast< int*>(_v) = _t->lineWidth(); break;
        case 15: *reinterpret_cast< int*>(_v) = _t->ellipseMinRadius(); break;
        case 16: *reinterpret_cast< int*>(_v) = _t->ellipseMaxRadius(); break;
        case 17: *reinterpret_cast< int*>(_v) = _t->noisePointSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Captcha *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 2: _t->setCaptchaText(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setDeformationType(*reinterpret_cast< DeformType*>(_v)); break;
        case 4: _t->setTextGeneration(*reinterpret_cast< TextGenerationMode*>(_v)); break;
        case 5: _t->setDictionary(*reinterpret_cast< QStringList*>(_v)); break;
        case 6: _t->setFontColor(*reinterpret_cast< QColor*>(_v)); break;
        case 7: _t->setBackColor(*reinterpret_cast< QColor*>(_v)); break;
        case 8: _t->setDrawLines(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setDrawEllipses(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setDrawNoise(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setNoiseCount(*reinterpret_cast< int*>(_v)); break;
        case 12: _t->setLineCount(*reinterpret_cast< int*>(_v)); break;
        case 13: _t->setEllipseCount(*reinterpret_cast< int*>(_v)); break;
        case 14: _t->setLineWidth(*reinterpret_cast< int*>(_v)); break;
        case 15: _t->setEllipseMinRadius(*reinterpret_cast< int*>(_v)); break;
        case 16: _t->setEllipseMaxRadius(*reinterpret_cast< int*>(_v)); break;
        case 17: _t->setNoisePointSize(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Captcha::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Captcha.data,
    qt_meta_data_Captcha,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Captcha::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Captcha::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Captcha.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Captcha::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 29;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 18;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Captcha::catpchaGenerated(const QImage & _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
