@class NSString;

@interface PSIReusableObject : NSObject <PSITypedObject> {
    BOOL _isPreparedForReuse;
    BOOL _isPreparingFromStatement;
}

@property (readonly, nonatomic) BOOL isPreparedFromStatement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)prepareForReuse;
- (unsigned long long)objectType;
- (void)didPrepareFromStatement:(struct sqlite3_stmt { } *)a0;
- (void)prepareFromStatement:(struct sqlite3_stmt { } *)a0;

@end
