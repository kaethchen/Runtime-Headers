@class NSString, NSDictionary;

@interface iCloudSettings.Action : NSObject {
    void /* unknown type, empty encoding */ _rawJsonObject;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ urlString;
    void /* unknown type, empty encoding */ actionParameters;
    void /* unknown type, empty encoding */ buyParameters;
}

@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *urlString;
@property (nonatomic, readonly) NSDictionary *actionParameters;
@property (nonatomic, readonly) NSDictionary *buyParameters;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ actionConfirmation;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isDefault;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isDestructive;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL isUpsellAction;

- (id)init;
- (void).cxx_destruct;
- (id)init:(id)a0;

@end
