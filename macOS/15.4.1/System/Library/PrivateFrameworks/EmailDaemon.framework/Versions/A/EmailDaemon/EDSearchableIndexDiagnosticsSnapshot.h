@class NSNumber, NSDictionary, NSDate;

@interface EDSearchableIndexDiagnosticsSnapshot : NSObject

@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSNumber *indexableMessages;
@property (retain, nonatomic) NSNumber *messagesIndexed;
@property (nonatomic) BOOL turboMode;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithDate:(id)a0 indexableMessages:(id)a1 messagesIndexed:(id)a2 turboMode:(BOOL)a3;

@end
