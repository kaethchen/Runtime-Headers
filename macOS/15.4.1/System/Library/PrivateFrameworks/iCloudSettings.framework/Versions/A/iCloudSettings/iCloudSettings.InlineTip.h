@class NSString, NSURL, NSArray;

@interface iCloudSettings.InlineTip : NSObject {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subtitle;
    void /* unknown type, empty encoding */ iconURL;
    void /* unknown type, empty encoding */ actions;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSURL *iconURL;
@property (nonatomic, readonly) NSArray *actions;

- (id)init;
- (void).cxx_destruct;
- (id)init:(id)a0;

@end
