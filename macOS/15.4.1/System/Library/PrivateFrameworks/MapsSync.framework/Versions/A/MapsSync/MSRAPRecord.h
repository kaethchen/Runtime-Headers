@class NSString, MSCommunityID, NSData, NSDate;

@interface MSRAPRecord : MapsSync.MapsSyncObject {
    void /* unknown type, empty encoding */ _clientRevision;
    void /* unknown type, empty encoding */ _contentData;
    void /* unknown type, empty encoding */ _countryCode;
    void /* unknown type, empty encoding */ _positionIndex;
    void /* unknown type, empty encoding */ _rapResponse;
    void /* unknown type, empty encoding */ _reportId;
    void /* unknown type, empty encoding */ _status;
    void /* unknown type, empty encoding */ _statusLastUpdatedDate;
    void /* unknown type, empty encoding */ _summary;
    void /* unknown type, empty encoding */ _type;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic) short clientRevision;
@property (nonatomic, copy) NSData *contentData;
@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic) long long positionIndex;
@property (nonatomic, copy) NSData *rapResponse;
@property (nonatomic, copy) NSString *reportId;
@property (nonatomic) short status;
@property (nonatomic, copy) NSDate *statusLastUpdatedDate;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic) short type;
@property (nonatomic, readonly) MSCommunityID *communityID;

- (void).cxx_destruct;
- (void)setCommunityID:(id)a0;
- (id)initWithClientRevision:(short)a0 contentData:(id)a1 countryCode:(id)a2 positionIndex:(long long)a3 rapResponse:(id)a4 reportId:(id)a5 status:(short)a6 statusLastUpdatedDate:(id)a7 summary:(id)a8 type:(short)a9;
- (id)initWithObject:(id)a0 store:(id)a1 lazyLoad:(BOOL)a2;
- (id)initWithStore:(id)a0 clientRevision:(short)a1 contentData:(id)a2 countryCode:(id)a3 positionIndex:(long long)a4 rapResponse:(id)a5 reportId:(id)a6 status:(short)a7 statusLastUpdatedDate:(id)a8 summary:(id)a9 type:(short)a10;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0 lazyLoad:(BOOL)a1;

@end
