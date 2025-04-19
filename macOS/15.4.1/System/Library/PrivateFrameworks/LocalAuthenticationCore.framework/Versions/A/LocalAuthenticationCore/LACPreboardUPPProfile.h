@class NSString;

@interface LACPreboardUPPProfile : NSObject

@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *teamID;
@property (retain, nonatomic) NSString *teamName;

- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 teamID:(id)a1 teamName:(id)a2;

@end
