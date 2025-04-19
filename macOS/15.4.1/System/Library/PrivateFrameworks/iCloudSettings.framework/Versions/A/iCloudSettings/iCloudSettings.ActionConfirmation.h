@class NSString, NSArray;

@interface iCloudSettings.ActionConfirmation : NSObject {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ message;
    void /* unknown type, empty encoding */ actions;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) NSArray *actions;

- (id)init;
- (void).cxx_destruct;
- (id)init:(id)a0;

@end
