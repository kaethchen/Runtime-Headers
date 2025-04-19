@class GCVersion, NSPredicate, GCGenericDeviceModel, NSURL;

@interface _GCDeviceDBPersonality : NSObject <NSCopying> {
    NSURL *_url;
}

@property (readonly, copy) GCVersion *compatibilityVersion;
@property (readonly, copy) GCVersion *obsoletedInVersion;
@property (readonly, copy) NSPredicate *ioMatchingPredicate;
@property (readonly, copy) GCGenericDeviceModel *model;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 error:(out id *)a1;
- (id)initWithURL:(id)a0 error:(out id *)a1;

@end
