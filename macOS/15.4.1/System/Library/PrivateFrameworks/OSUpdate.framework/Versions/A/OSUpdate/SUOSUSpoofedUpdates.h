@interface SUOSUSpoofedUpdates : NSObject

- (id)init;
- (id)getReadmeOverridePath;
- (BOOL)_hasSpoofOSUpdate;
- (id)createSpoofUpdates;

@end
