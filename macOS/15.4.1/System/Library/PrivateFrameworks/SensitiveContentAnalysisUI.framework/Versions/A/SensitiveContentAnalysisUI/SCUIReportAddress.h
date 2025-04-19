@class NSString;

@interface SCUIReportAddress : NSObject

@property (readonly, copy) NSString *address;
@property (readonly, copy) NSString *city;
@property (readonly, copy) NSString *state;
@property (readonly, copy) NSString *country;
@property (readonly, copy) NSString *postCode;

- (void).cxx_destruct;
- (id)initWithAddress:(id)a0 city:(id)a1 state:(id)a2 country:(id)a3 postCode:(id)a4;

@end
