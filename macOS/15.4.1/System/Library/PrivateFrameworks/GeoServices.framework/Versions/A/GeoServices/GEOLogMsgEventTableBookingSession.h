@class NSString, NSMutableArray, PBDataReader;

@interface GEOLogMsgEventTableBookingSession : PBCodable <NSCopying> {
    PBDataReader *_reader;
    long long _blurredBookingTimestamp;
    long long _blurredReservationTimestamp;
    NSString *_bookTableAppId;
    NSString *_bookTableSessionId;
    double _durationOfSessionInSeconds;
    NSMutableArray *_errorMessages;
    NSString *_installNeededTappedAppId;
    unsigned long long _muid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _endState;
    int _endView;
    unsigned int _tableSize;
    BOOL _addedSpecialRequest;
    BOOL _installCompleted;
    BOOL _installNeeded;
    BOOL _swipedAvailableTimes;
    BOOL _tappedDatePicker;
    struct { unsigned char has_blurredBookingTimestamp : 1; unsigned char has_blurredReservationTimestamp : 1; unsigned char has_durationOfSessionInSeconds : 1; unsigned char has_muid : 1; unsigned char has_endState : 1; unsigned char has_endView : 1; unsigned char has_tableSize : 1; unsigned char has_addedSpecialRequest : 1; unsigned char has_installCompleted : 1; unsigned char has_installNeeded : 1; unsigned char has_swipedAvailableTimes : 1; unsigned char has_tappedDatePicker : 1; unsigned char read_bookTableAppId : 1; unsigned char read_bookTableSessionId : 1; unsigned char read_errorMessages : 1; unsigned char read_installNeededTappedAppId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasBookTableSessionId;
@property (retain, nonatomic) NSString *bookTableSessionId;
@property (nonatomic) BOOL hasEndState;
@property (nonatomic) int endState;
@property (nonatomic) BOOL hasEndView;
@property (nonatomic) int endView;
@property (readonly, nonatomic) BOOL hasBookTableAppId;
@property (retain, nonatomic) NSString *bookTableAppId;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) BOOL hasBlurredReservationTimestamp;
@property (nonatomic) long long blurredReservationTimestamp;
@property (nonatomic) BOOL hasBlurredBookingTimestamp;
@property (nonatomic) long long blurredBookingTimestamp;
@property (nonatomic) BOOL hasDurationOfSessionInSeconds;
@property (nonatomic) double durationOfSessionInSeconds;
@property (nonatomic) BOOL hasInstallNeeded;
@property (nonatomic) BOOL installNeeded;
@property (readonly, nonatomic) BOOL hasInstallNeededTappedAppId;
@property (retain, nonatomic) NSString *installNeededTappedAppId;
@property (nonatomic) BOOL hasInstallCompleted;
@property (nonatomic) BOOL installCompleted;
@property (nonatomic) BOOL hasTableSize;
@property (nonatomic) unsigned int tableSize;
@property (nonatomic) BOOL hasAddedSpecialRequest;
@property (nonatomic) BOOL addedSpecialRequest;
@property (nonatomic) BOOL hasSwipedAvailableTimes;
@property (nonatomic) BOOL swipedAvailableTimes;
@property (nonatomic) BOOL hasTappedDatePicker;
@property (nonatomic) BOOL tappedDatePicker;
@property (retain, nonatomic) NSMutableArray *errorMessages;

+ (Class)errorMessageType;
+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addErrorMessage:(id)a0;
- (int)StringAsEndView:(id)a0;
- (int)StringAsEndState:(id)a0;
- (void)clearErrorMessages;
- (id)endStateAsString:(int)a0;
- (id)endViewAsString:(int)a0;
- (id)errorMessageAtIndex:(unsigned long long)a0;
- (unsigned long long)errorMessagesCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
