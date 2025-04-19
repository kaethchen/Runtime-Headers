@class NSString, NSMutableDictionary;

@interface CIMetalWrapper : CIFilter

@property (retain) NSMutableDictionary *_dict;
@property (copy) NSString *inputFilterName;

- (void)dealloc;
- (id)init;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)attributes;
- (id)outputImage;
- (id)inputKeys;
- (id)dummyImagesForImages:(id)a0;

@end
