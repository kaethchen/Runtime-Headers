@interface ContactsUI.ContactHeaderViewWrapper : NSObject {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ statusBadgeModel;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ hostingController;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, retain) void /* unknown type, empty encoding */ contact;
@property (nonatomic) void /* unknown type, empty encoding */ enableStatusBadges;
@property (nonatomic, readonly) double desiredHeight;
@property (nonatomic) void /* unknown type, empty encoding */ quickActionViewStyle;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContact:(id)a0 quickActionViewStyle:(long long)a1 delegate:(id)a2;

@end
