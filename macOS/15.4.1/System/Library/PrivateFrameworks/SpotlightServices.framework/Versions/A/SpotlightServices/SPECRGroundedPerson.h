@class NSString;

@interface SPECRGroundedPerson : NSObject

@property (retain, nonatomic) NSString *fullName;
@property (retain, nonatomic) NSString *relationLabel;
@property (retain, nonatomic) NSString *ecrToken;
@property (retain, nonatomic) NSString *queryRawToken;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 relationLabel:(id)a1 ecrToken:(id)a2 queryRawToken:(id)a3;

@end
