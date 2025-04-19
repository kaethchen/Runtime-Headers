@class NSString, SLSSpaceWindowManager, NSMutableSet;

@interface SLSWindowManagerSpace : NSObject

@property unsigned long long spaceID;
@property int type;
@property (getter=isManagedSpace) BOOL managedSpace;
@property (copy) NSString *displayUUID;
@property (weak) SLSSpaceWindowManager *manager;
@property (retain) NSMutableSet *windowIDs;
@property (readonly, getter=isCurrentSpace) BOOL currentSpace;

- (void).cxx_destruct;
- (id)_effectiveDisplayID;

@end
