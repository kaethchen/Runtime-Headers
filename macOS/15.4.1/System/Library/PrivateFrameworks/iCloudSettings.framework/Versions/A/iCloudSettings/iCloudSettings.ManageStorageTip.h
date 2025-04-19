@class NSString, NSArray;

@interface iCloudSettings.ManageStorageTip : NSObject {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subTitle;
    void /* unknown type, empty encoding */ dismissURL;
    void /* unknown type, empty encoding */ anchor;
    void /* unknown type, empty encoding */ sfSymbol;
    void /* unknown type, empty encoding */ sfSymbolColor;
    void /* unknown type, empty encoding */ actions;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subTitle;
@property (nonatomic, readonly) NSString *dismissURL;
@property (nonatomic, readonly) NSString *anchor;
@property (nonatomic, readonly) NSString *sfSymbol;
@property (nonatomic, readonly) NSString *sfSymbolColor;
@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) BOOL containsUpsellAction;
@property (nonatomic, readonly) BOOL containsFamilyAction;

- (id)init;
- (void).cxx_destruct;
- (id)init:(id)a0;

@end
