@class NSString, NSMutableDictionary, AECommandParameter;

@interface AECommandDetails : NSObject

@property (retain) NSString *displayName;
@property unsigned int eventClass;
@property unsigned int eventID;
@property (retain) NSMutableDictionary *parameters;
@property (retain) AECommandParameter *directParameter;
@property unsigned int resultType;

+ (id)detailsWithEventClass:(unsigned int)a0 eventID:(unsigned int)a1 displayName:(id)a2;

- (void).cxx_destruct;
- (id)parameterNames;
- (id)initWithEventClass:(unsigned int)a0 eventID:(unsigned int)a1 displayName:(id)a2;
- (unsigned int)parameterCodeForName:(id)a0;
- (id)parameterNameForCode:(unsigned int)a0;
- (void)setParameter:(id)a0 forName:(id)a1;

@end
