@class NSString, NSArray, NSDictionary;

@interface iCloudSettings.StatefulHeader : NSObject {
    void /* unknown type, empty encoding */ layoutType;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subTitle;
    void /* unknown type, empty encoding */ actions;
    void /* unknown type, empty encoding */ impressionUrlString;
    void /* unknown type, empty encoding */ impressionPayload;
}

@property (nonatomic, readonly) NSString *layoutType;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subTitle;
@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) NSString *impressionUrlString;
@property (nonatomic, readonly) NSDictionary *impressionPayload;

- (id)init;
- (void).cxx_destruct;
- (id)init:(id)a0;

@end
