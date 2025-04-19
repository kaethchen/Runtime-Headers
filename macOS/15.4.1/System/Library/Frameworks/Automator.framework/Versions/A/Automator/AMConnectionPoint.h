@class AMActionConnector, NSString, NSDictionary, NSPredicate, AMAction;

@interface AMConnectionPoint : NSObject <NSCopying> {
    NSString *_utiType;
    BOOL _isInputPoint;
}

@property (retain) AMActionConnector *_runtimeConnector;
@property (weak, nonatomic) AMAction *action;
@property (retain) NSPredicate *predicate;
@property (weak) AMActionConnector *connector;
@property (retain, nonatomic) NSString *UTIType;
@property (retain) NSDictionary *runtimeTypeDictionary;
@property (copy, nonatomic) NSString *typeDisplayName;
@property (retain, nonatomic) AMActionConnector *runtimeConnector;
@property (readonly, nonatomic) NSString *UUID;
@property (readonly, nonatomic) NSDictionary *typeDictionary;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (id)inputConnectionPointWithAction:(id)a0;
+ (id)outputConnectionPointWithAction:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)resetToDefault;
- (void)generateUTITypes;
- (id)initWithAction:(id)a0 isInput:(BOOL)a1;
- (void)resetToDefaultOnMainThread;

@end
