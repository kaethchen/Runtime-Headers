@class PSIDateFilter, NSCalendar, NSString, NSDate;

@interface PLSearchSuggestionTemplate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PSIDateFilter *dateFilter;
@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) NSDate *todayDate;
@property (readonly, copy, nonatomic) NSString *suggestionTemplateKey;
@property (readonly, nonatomic) unsigned long long firstIndexCategory;
@property (readonly, nonatomic) unsigned long long secondIndexCategory;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isMeTemplate;
@property (readonly, nonatomic) unsigned long long templateContentType;
@property (readonly, nonatomic) unsigned long long templateDateType;
@property (readonly, nonatomic) unsigned long long templateType;
@property (readonly, nonatomic) unsigned long long templateStyleType;
@property (readonly, nonatomic) unsigned long long localeSupportType;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithSuggestionTemplateKey:(id)a0 firstIndexCategory:(unsigned long long)a1 secondIndexCategory:(unsigned long long)a2 templateType:(unsigned long long)a3 templateContentType:(unsigned long long)a4 templateDateType:(unsigned long long)a5 styleType:(unsigned long long)a6 identifier:(id)a7 todayDate:(id)a8 locale:(id)a9;
- (id)initForTestingWithSuggestionTemplateKey:(id)a0 firstIndexCategory:(unsigned long long)a1 secondIndexCategory:(unsigned long long)a2 templateType:(unsigned long long)a3 templateContentType:(unsigned long long)a4 templateDateType:(unsigned long long)a5 styleType:(unsigned long long)a6 identifier:(id)a7 todayDate:(id)a8 locale:(id)a9;
- (id)initWithSuggestionTemplateKey:(id)a0 firstIndexCategory:(unsigned long long)a1 secondIndexCategory:(unsigned long long)a2 templateType:(unsigned long long)a3 templateContentType:(unsigned long long)a4 templateDateType:(unsigned long long)a5 styleType:(unsigned long long)a6 identifier:(id)a7 todayDate:(id)a8 locale:(id)a9;
- (BOOL)isDateOnlyTemplate;

@end
