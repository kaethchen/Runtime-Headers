@class NSMutableArray;

@interface PDFMarkupStylePickerCellPrivate : NSObject {
    NSMutableArray *styleImages;
    unsigned long long hoveredStyle;
    unsigned long long focusedStyle;
}

- (void).cxx_destruct;

@end
