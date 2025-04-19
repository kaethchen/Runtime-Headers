@class NSArray, NSRegularExpression;

@interface _NSImageTypeData : NSObject {
    NSArray *imageTypes;
    NSArray *imageFileTypes;
    NSArray *imagePasteboardTypes;
    NSArray *imageUnfilteredTypes;
    NSArray *imageUnfilteredFileTypes;
    NSArray *imageUnfilteredPasteboardTypes;
    NSRegularExpression *namedImageSuffixExpression;
    NSRegularExpression *namedImageUnfilteredSuffixExpression;
}

+ (void)initialize;

- (void)dealloc;
- (id)imageFileTypes;
- (BOOL)imageFileTypesContains:(id)a0;
- (id)imagePasteboardTypes;
- (id)imageTypes;
- (id)imageUnfilteredFileTypes;
- (id)imageUnfilteredPasteboardTypes;
- (id)imageUnfilteredTypes;
- (id)namedImageSuffixExpression;
- (id)namedImageUnfilteredSuffixExpression;

@end
