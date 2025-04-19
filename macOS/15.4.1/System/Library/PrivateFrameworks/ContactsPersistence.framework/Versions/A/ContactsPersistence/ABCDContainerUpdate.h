@class NSString;

@interface ABCDContainerUpdate : NSObject <ABCDContainerUpdate>

@property (retain) NSString *key;
@property (retain) id value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)updateWithPropertyKey:(id)a0 value:(id)a1;

- (void).cxx_destruct;
- (id)initWithPropertyKey:(id)a0 value:(id)a1;

@end
