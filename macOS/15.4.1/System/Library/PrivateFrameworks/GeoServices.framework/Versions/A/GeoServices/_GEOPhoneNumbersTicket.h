@class NSArray;

@interface _GEOPhoneNumbersTicket : GEOAbstractMapServiceTicket {
    NSArray *_phoneNumbers;
    BOOL _allowCellularDataForLookup;
}

- (id)description;
- (void).cxx_destruct;
- (struct { int x0; union { int x0; int x1; int x2; } x1; })dataRequestKind;
- (id)initWithPhoneNumbers:(id)a0 allowCellularDataForLookup:(BOOL)a1 traits:(id)a2;
- (void)submitWithHandler:(id /* block */)a0 auditToken:(id)a1 timeout:(long long)a2 networkActivity:(id /* block */)a3;

@end
