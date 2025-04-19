@class NSString, NSURL;

@interface WBSPageTest : NSObject <WBSTest>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSURL *pageURL;
@property (readonly, nonatomic) NSURL *expectedResultsURL;
@property (readonly, nonatomic) struct CGSize { double width; double height; } viewportSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 pageURL:(id)a1 expectedResultsURL:(id)a2 dictionary:(id)a3;

@end
