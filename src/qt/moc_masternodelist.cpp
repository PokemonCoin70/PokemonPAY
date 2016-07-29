/****************************************************************************
** Meta object code from reading C++ file 'masternodelist.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/masternodelist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'masternodelist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MasternodeList_t {
    QByteArrayData data[21];
    char stringdata[339];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MasternodeList_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MasternodeList_t qt_meta_stringdata_MasternodeList = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 22),
QT_MOC_LITERAL(2, 38, 0),
QT_MOC_LITERAL(3, 39, 5),
QT_MOC_LITERAL(4, 45, 4),
QT_MOC_LITERAL(5, 50, 7),
QT_MOC_LITERAL(6, 58, 6),
QT_MOC_LITERAL(7, 65, 7),
QT_MOC_LITERAL(8, 73, 12),
QT_MOC_LITERAL(9, 86, 3),
QT_MOC_LITERAL(10, 90, 16),
QT_MOC_LITERAL(11, 107, 5),
QT_MOC_LITERAL(12, 113, 14),
QT_MOC_LITERAL(13, 128, 15),
QT_MOC_LITERAL(14, 144, 29),
QT_MOC_LITERAL(15, 174, 12),
QT_MOC_LITERAL(16, 187, 22),
QT_MOC_LITERAL(17, 210, 25),
QT_MOC_LITERAL(18, 236, 29),
QT_MOC_LITERAL(19, 266, 48),
QT_MOC_LITERAL(20, 315, 23)
    },
    "MasternodeList\0updateMyMasternodeInfo\0"
    "\0alias\0addr\0privkey\0txHash\0txIndex\0"
    "CMasternode*\0pmn\0updateMyNodeList\0"
    "reset\0updateNodeList\0showContextMenu\0"
    "on_filterLineEdit_textChanged\0"
    "filterString\0on_startButton_clicked\0"
    "on_startAllButton_clicked\0"
    "on_startMissingButton_clicked\0"
    "on_tableWidgetMyMasternodes_itemSelectionChanged\0"
    "on_UpdateButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MasternodeList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    6,   69,    2, 0x0a /* Public */,
      10,    1,   82,    2, 0x0a /* Public */,
      10,    0,   85,    2, 0x2a /* Public | MethodCloned */,
      12,    0,   86,    2, 0x0a /* Public */,
      13,    1,   87,    2, 0x08 /* Private */,
      14,    1,   90,    2, 0x08 /* Private */,
      16,    0,   93,    2, 0x08 /* Private */,
      17,    0,   94,    2, 0x08 /* Private */,
      18,    0,   95,    2, 0x08 /* Private */,
      19,    0,   96,    2, 0x08 /* Private */,
      20,    0,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 8,    3,    4,    5,    6,    7,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MasternodeList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MasternodeList *_t = static_cast<MasternodeList *>(_o);
        switch (_id) {
        case 0: _t->updateMyMasternodeInfo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< CMasternode*(*)>(_a[6]))); break;
        case 1: _t->updateMyNodeList((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->updateMyNodeList(); break;
        case 3: _t->updateNodeList(); break;
        case 4: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 5: _t->on_filterLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_startButton_clicked(); break;
        case 7: _t->on_startAllButton_clicked(); break;
        case 8: _t->on_startMissingButton_clicked(); break;
        case 9: _t->on_tableWidgetMyMasternodes_itemSelectionChanged(); break;
        case 10: _t->on_UpdateButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MasternodeList::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MasternodeList.data,
      qt_meta_data_MasternodeList,  qt_static_metacall, 0, 0}
};


const QMetaObject *MasternodeList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MasternodeList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MasternodeList.stringdata))
        return static_cast<void*>(const_cast< MasternodeList*>(this));
    return QWidget::qt_metacast(_clname);
}

int MasternodeList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
