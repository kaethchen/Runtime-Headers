@class NSString;

@interface _NSPboardImageTypeConverter : NSObject {
    NSString *_sourceType;
}

+ (id)imageTypeConverterForType:(id)a0;

- (void)dealloc;
- (id)initWithType:(id)a0;
- (id)_convertImageData:(id)a0 toDataOfType:(id)a1;

@end
