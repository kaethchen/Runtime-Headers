@class NSString, NSDictionary, _TtC14iCloudSettings6Action;

@interface iCloudSettings.ManageStorageAction : NSObject {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ actionString;
    void /* unknown type, empty encoding */ actionURL;
    void /* unknown type, empty encoding */ actionParameters;
    void /* unknown type, empty encoding */ buyParameters;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ isDefault;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isDestructive;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic) void /* unknown type, empty encoding */ actionType;
@property (nonatomic, readonly) NSString *actionString;
@property (nonatomic, copy) NSString *actionURL;
@property (nonatomic, readonly) NSDictionary *actionParameters;
@property (nonatomic, readonly) NSDictionary *buyParameters;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ confirmation;
@property (nonatomic, readonly) _TtC14iCloudSettings6Action *homeAction;
@property (nonatomic, readonly) BOOL isUpsellAction;
@property (nonatomic, readonly) BOOL isFamilyAction;

- (id)init;
- (void).cxx_destruct;
- (id)init:(id)a0;

@end
