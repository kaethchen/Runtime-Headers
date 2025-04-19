@class NSString, NSSet, AVDispatchOnce;

@interface AVMediaFileType : NSObject <NSCopying> {
    NSString *_uti;
    AVDispatchOnce *_supportsSampleReferencesOnce;
    BOOL _supportsSampleReferences;
}

@property (readonly, nonatomic) NSString *defaultFileExtension;
@property (readonly, nonatomic) NSSet *supportedMediaTypes;
@property (readonly, nonatomic) BOOL supportsSampleReferences;
@property (readonly, nonatomic) NSString *UTI;
@property (readonly, nonatomic) NSString *figFormatReaderFileFormat;
@property (readonly, nonatomic) unsigned int audioFileTypeID;

+ (void)initialize;
+ (id)_mediaFileTypeWithFileTypeIdentifier:(id)a0 exceptionReason:(id *)a1;
+ (id)allFileTypeIdentifiers;
+ (struct __CFString { } *)figFileTypeProfileFromAVFileTypeProfile:(id)a0;
+ (id)isoFileTypes;
+ (id)mediaFileTypeWithFileTypeIdentifier:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)supportsFormat:(struct opaqueCMFormatDescription { } *)a0;
- (id)initWithFileTypeIdentifier:(id)a0 exceptionReason:(id *)a1;
- (BOOL)supportsOutputSettings:(id)a0 reason:(id *)a1;

@end
