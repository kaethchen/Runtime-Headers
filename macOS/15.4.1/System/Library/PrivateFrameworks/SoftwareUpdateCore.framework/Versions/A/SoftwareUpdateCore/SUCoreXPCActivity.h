@class NSString, SUCoreActivityOptions;

@interface SUCoreXPCActivity : NSObject

@property (retain, nonatomic) NSString *activityName;
@property (retain, nonatomic) SUCoreActivityOptions *activityOptions;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) BOOL isRegisteredWithXPC;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init:(id)a0 options:(id)a1 handler:(id /* block */)a2;

@end
