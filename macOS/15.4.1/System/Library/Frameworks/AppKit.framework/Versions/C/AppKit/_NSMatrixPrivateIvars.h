@class NSColor, NSCell;

@interface _NSMatrixPrivateIvars : NSObject {
    long long _keyCol;
    NSColor *_cellBackgroundColor;
    long long _drawingRow;
    long long _drawingCol;
    long long _matrixMDFlags;
    struct __MFlags2 { unsigned int RESERVED : 32; } _mFlags2;
    long long _keyRow;
    long long _getRowColumnOfCellLastFoundIndexCache;
    NSCell *_clickedCell;
}

@end
