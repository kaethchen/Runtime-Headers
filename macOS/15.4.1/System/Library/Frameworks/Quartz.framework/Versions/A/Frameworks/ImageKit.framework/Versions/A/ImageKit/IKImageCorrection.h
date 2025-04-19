@class NSString, NSMutableDictionary, IKImageCorrectionHandler;

@interface IKImageCorrection : NSObject {
    NSMutableDictionary *_minMaxInfo;
}

@property IKImageCorrectionHandler *imageCorrectionHandler;
@property (copy) NSString *className;
@property BOOL correctionEnabled;
@property (readonly) NSString *name;
@property (readonly) BOOL isIdentity;

- (id)attributes;
- (void)setDefaults;
- (double)minValueForKey:(id)a0;
- (double)maxValueForKey:(id)a0;
- (double)identValueForKey:(id)a0;
- (id)initWithClassName:(id)a0 identifier:(id)a1;
- (id)processedImage:(id)a0 ciContext:(id)a1 cgContext:(struct CGContext { } *)a2;

@end
