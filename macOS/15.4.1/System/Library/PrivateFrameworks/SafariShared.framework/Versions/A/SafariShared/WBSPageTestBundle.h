@class NSString, NSArray;

@interface WBSPageTestBundle : NSObject <WBSTestBundle>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSArray *allTests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 tests:(id)a1;

@end
