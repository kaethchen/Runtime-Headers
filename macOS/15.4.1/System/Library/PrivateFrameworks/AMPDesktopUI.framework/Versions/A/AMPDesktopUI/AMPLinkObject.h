@class NSString;

@interface AMPLinkObject : NSObject <AMPLinkAction>

@property (copy, nonatomic) id /* block */ action;
@property (readonly, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)doAction;

@end
