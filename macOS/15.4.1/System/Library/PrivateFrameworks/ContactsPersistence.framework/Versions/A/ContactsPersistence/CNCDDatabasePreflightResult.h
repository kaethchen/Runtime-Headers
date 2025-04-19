@interface CNCDDatabasePreflightResult : NSObject

@property (readonly, getter=isPristine) BOOL pristine;
@property (readonly, getter=isReadOnly) BOOL readOnly;
@property (readonly, getter=shouldCreateMyCard) BOOL createMyCard;

- (id)description;
- (id)initWithPristine:(BOOL)a0 readOnly:(BOOL)a1 createMyCard:(BOOL)a2;

@end
