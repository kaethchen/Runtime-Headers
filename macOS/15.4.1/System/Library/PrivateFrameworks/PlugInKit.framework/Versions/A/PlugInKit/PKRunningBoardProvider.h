@class NSString;

@interface PKRunningBoardProvider : NSObject <PKRunningBoardProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)plugInHandshakeComplete;
- (id)processAssertionWithPID:(int)a0 flags:(unsigned int)a1 reason:(unsigned int)a2 name:(id)a3;
- (id)taskStatesForPID:(id)a0 error:(id *)a1;

@end
