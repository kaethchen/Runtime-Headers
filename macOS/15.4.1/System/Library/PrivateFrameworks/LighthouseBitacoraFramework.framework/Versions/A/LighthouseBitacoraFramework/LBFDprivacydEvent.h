@class NSString, NSNumber;

@interface LBFDprivacydEvent : NSObject

@property (readonly, nonatomic) int eventPhase;
@property (readonly, nonatomic) NSString *eventUUID;
@property (readonly, nonatomic) NSNumber *succeeded;
@property (readonly, nonatomic) NSString *errorMessage;
@property (readonly, nonatomic) int aggregateFunction;
@property (readonly, nonatomic) int errorCode;
@property (readonly, nonatomic) int count;

- (void).cxx_destruct;
- (id)initWithEventPhase:(int)a0 eventUUID:(id)a1 succeeded:(BOOL)a2 error:(id)a3 aggregateFunction:(int)a4 count:(int)a5;
- (id)initWithEventPhase:(int)a0 eventUUID:(id)a1 succeeded:(BOOL)a2 error:(id)a3;

@end
