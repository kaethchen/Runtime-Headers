@class NSData, NSString;

@interface SOAPBaseDocument : NSObject

@property (readonly, copy, nonatomic) NSData *XMLData;
@property (readonly, copy, nonatomic) NSString *XMLString;

- (id)XMLStringWithOptions:(unsigned long long)a0;
- (id)XMLDataWithOptions:(unsigned long long)a0;

@end
