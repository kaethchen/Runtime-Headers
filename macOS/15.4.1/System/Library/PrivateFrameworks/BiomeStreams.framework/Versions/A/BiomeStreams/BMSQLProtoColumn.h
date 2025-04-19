@class NSArray;

@interface BMSQLProtoColumn : BMSQLColumn

@property (readonly, nonatomic) NSArray *fieldPath;
@property (readonly, nonatomic) long long protoDataType;
@property (readonly, nonatomic) long long convertedType;

+ (id)new;
+ (id)extractValueFromProtoData:(id)a0 fieldNumber:(long long)a1 type:(long long)a2 error:(id *)a3;
+ (id)extractValueFromProtoData:(id)a0 fieldPath:(id)a1 type:(long long)a2 error:(id *)a3;
+ (id)extractValuesFromProtoData:(id)a0 fieldNumber:(long long)a1 type:(long long)a2 error:(id *)a3;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 dataType:(long long)a1 requestOnly:(BOOL)a2 fieldNumber:(long long)a3 protoDataType:(long long)a4 convertedType:(long long)a5;
- (id)initWithName:(id)a0 dataType:(long long)a1 requestOnly:(BOOL)a2 fieldPath:(id)a3 protoDataType:(long long)a4 convertedType:(long long)a5;
- (BOOL)setSQLiteValueFromRow:(id)a0 sqliteContext:(struct sqlite3_context { } *)a1 error:(id *)a2;

@end
