@class NSString;

@interface TMTarget : NSObject

@property (class, readonly) TMTarget *rootTarget;

@property (copy) NSString *volumeRelativePath;
@property (readonly, copy) NSString *volumeName;
@property (readonly, copy) NSString *volumeUUID;

- (void).cxx_destruct;
- (void)enumerateAncestorTargetsToRoot:(id /* block */)a0;
- (id)initWithVolumeRelativePath:(id)a0 volumeName:(id)a1 volumeUUID:(id)a2;

@end
