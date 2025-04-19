@class NSArray, NSBundle, NSData, NSString;

@interface NSNib : NSObject <NSCoding> {
    NSData *_data;
    NSArray *_images;
    NSArray *_sounds;
    NSBundle *_bundle;
    struct _NSNibFlags { unsigned char _isKeyed : 1; unsigned char _inheritsDecodeTimeBundle : 1; unsigned char _inheritsDecodeTimePath : 1; unsigned int _reserved : 29; } _flags;
    NSString *_path;
    id _reusableDecoder;
}

+ (id)_NSNibBindingDeprecationStringForUIItem:(id)a0;
+ (id)_NSNibBindingHelpStringForUIItem:(id)a0 binding:(id)a1;
+ (id)_NSNibObjectIDForUIItemIdentifier:(id)a0;
+ (id)_NSNibPathForNibID:(id)a0;
+ (id)_NSNibPathForUIItemIdentifier:(id)a0;
+ (id)_NSNibRegisterNIBPath:(id)a0;
+ (id)_NSNibShortcutNameForUIItemIdentifier:(id)a0;
+ (BOOL)getNibName:(id *)a0 objectID:(id *)a1 forUserInterfaceItem:(id)a2;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContentsOfURL:(id)a0;
- (id)_decoderWithZone:(struct _NSZone { } *)a0;
- (id)_initWithNibNamed:(id)a0 bundle:(id)a1 options:(unsigned long long)a2;
- (id)_initWithPath:(id)a0 bundle:(id)a1;
- (BOOL)_instantiateNibWithExternalNameTable:(id)a0 options:(id)a1;
- (BOOL)_instantiateWithOwner:(id)a0 options:(id)a1 topLevelObjects:(id *)a2;
- (void)_loadNibData;
- (id)_makeDecoderWithZone:(struct _NSZone { } *)a0;
- (id)_reusableDecoder;
- (void)_setReusableDecoder:(id)a0;
- (BOOL)inheritsDecodeTimeBundlePath;
- (id)initWithKeyedObjectsDataSettingBundleAtDecodeTime:(id)a0;
- (id)initWithNibData:(id)a0 bundle:(id)a1;
- (id)initWithNibNamed:(id)a0 bundle:(id)a1;
- (BOOL)instantiateNibWithExternalNameTable:(id)a0;
- (BOOL)instantiateNibWithOwner:(id)a0 topLevelObjects:(id *)a1;
- (BOOL)instantiateWithOwner:(id)a0 topLevelObjects:(id *)a1;
- (void)setInheritsDecodeTimeBundlePath:(BOOL)a0;

@end
