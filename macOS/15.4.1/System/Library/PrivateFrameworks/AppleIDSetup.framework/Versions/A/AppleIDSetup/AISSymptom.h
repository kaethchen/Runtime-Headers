@class NSString;

@interface AISSymptom : NSObject

@property (readonly, copy, nonatomic) NSString *altDSID;
@property (readonly, nonatomic) unsigned char priority;
@property (readonly, nonatomic) unsigned long long problemFlag;
@property (readonly, nonatomic) id errorInfo;

- (void).cxx_destruct;
- (id)initWithAltDSID:(id)a0 priority:(unsigned char)a1 problemFlag:(unsigned long long)a2 errorInfo:(id)a3;

@end
