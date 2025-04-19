@class NSString, NSArray;

@interface iCloudSettings.ManageStorageConfirmation : NSObject {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subTitle;
    void /* unknown type, empty encoding */ actions;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subTitle;
@property (nonatomic, readonly) NSArray *actions;

- (id)init;
- (void).cxx_destruct;
- (id)init:(id)a0;

@end
