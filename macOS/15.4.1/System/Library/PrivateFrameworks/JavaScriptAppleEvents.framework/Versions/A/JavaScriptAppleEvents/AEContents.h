@class NSString;

@interface AEContents : NSObject

@property (retain) NSString *name;
@property unsigned int code;
@property unsigned int classCode;

+ (id)contentsWithName:(id)a0 code:(unsigned int)a1 classCode:(unsigned int)a2;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 code:(unsigned int)a1 classCode:(unsigned int)a2;

@end
