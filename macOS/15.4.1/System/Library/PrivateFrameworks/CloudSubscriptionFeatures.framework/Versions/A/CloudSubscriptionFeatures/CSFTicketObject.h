@class NSString;

@interface CSFTicketObject : NSObject

@property (retain, nonatomic) NSString *ticket;
@property (nonatomic) unsigned long long status;

- (void).cxx_destruct;
- (id)initWithTicket:(id)a0 withStatus:(unsigned long long)a1;

@end
