@class SBObject, NSString, NSDictionary, NSDate, _AMFinderIconFamily;

@interface _AMFinderItem : SBObject

@property (copy) NSString *name;
@property (readonly, copy) NSString *displayedName;
@property (copy) NSString *nameExtension;
@property BOOL extensionHidden;
@property (readonly) long long index;
@property (readonly, copy) SBObject *container;
@property (readonly, copy) SBObject *disk;
@property struct CGPoint { double x0; double x1; } position;
@property struct CGPoint { double x0; double x1; } desktopPosition;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property long long labelIndex;
@property BOOL locked;
@property (readonly, copy) NSString *kind;
@property (readonly, copy) NSString *objectDescription;
@property (copy) NSString *comment;
@property (readonly) long long size;
@property (readonly) long long physicalSize;
@property (readonly, copy) NSDate *creationDate;
@property (copy) NSDate *modificationDate;
@property (copy) _AMFinderIconFamily *icon;
@property (readonly, copy) NSString *URL;
@property (copy) NSString *owner;
@property (copy) NSString *group;
@property int ownerPrivileges;
@property int groupPrivileges;
@property int everyonesPrivileges;
@property (readonly, copy) SBObject *informationWindow;
@property (copy) NSDictionary *properties;

- (void)close;
- (void)select;
- (void)activate;
- (id)delete;
- (void)eject;
- (BOOL)exists;
- (void)erase;
- (long long)dataSizeAs:(id)a0;
- (id)duplicateTo:(id)a0 replacing:(BOOL)a1 routingSuppressed:(BOOL)a2;
- (void)emptySecurity:(BOOL)a0;
- (id)moveTo:(id)a0 replacing:(BOOL)a1 positionedAt:(id)a2 routingSuppressed:(BOOL)a3;
- (void)openUsing:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0;
- (void)reveal;
- (void)updateNecessity:(BOOL)a0 registeringApplications:(BOOL)a1;

@end
