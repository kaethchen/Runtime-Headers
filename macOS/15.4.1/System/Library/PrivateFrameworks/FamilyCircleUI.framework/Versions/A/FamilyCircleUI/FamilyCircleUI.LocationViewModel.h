@class _TtC14FamilyCircleUI17LocationViewModel;

@interface FamilyCircleUI.LocationViewModel : NSObject {
    void /* unknown type, empty encoding */ _familyMembersSharingLocationWithMe;
    void /* unknown type, empty encoding */ _parentCanToggleChildsLocation;
    void /* unknown type, empty encoding */ _disableLocationToggles;
    void /* unknown type, empty encoding */ _sharingLocationWithFamilyMembers;
    void /* unknown type, empty encoding */ _childCanModifyLocationStatus;
    void /* unknown type, empty encoding */ _membersAutomaticallySharing;
    void /* unknown type, empty encoding */ screenTimeConnection;
    void /* unknown type, empty encoding */ servicesStore;
    void /* unknown type, empty encoding */ circleStore;
    void /* unknown type, empty encoding */ fmlSession;
    void /* unknown type, empty encoding */ locationListener;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ wasLoadDataCalled;
}

@property (class, nonatomic, retain) _TtC14FamilyCircleUI17LocationViewModel *shared;

+ (id)createModel;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
