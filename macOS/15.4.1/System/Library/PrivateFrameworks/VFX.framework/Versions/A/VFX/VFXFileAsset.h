@class NSString;

@interface VFXFileAsset : VFXCoreAsset {
    NSString *_filename;
}

@property (readonly, nonatomic) NSString *filename;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)absolutePath;
- (id)initWithFileNamed:(id)a0 entityObject:(id)a1;
- (id)copyWithFilename:(id)a0;

@end
