//
//  WSBitcoinCurrency.h
//  WaSPV
//
//  Created by Davide De Rosa on 28/12/14.
//  Copyright (c) 2014 Davide De Rosa. All rights reserved.
//
//  http://github.com/keeshux
//  http://twitter.com/keeshux
//  http://davidederosa.com
//
//  This file is part of WaSPV.
//
//  WaSPV is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  WaSPV is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with WaSPV.  If not, see <http://www.gnu.org/licenses/>.
//

#import <Foundation/Foundation.h>

#import "WSCurrency.h"

extern NSString *const WSBitcoinCurrencyCodeBTC;
extern NSString *const WSBitcoinCurrencyCodeMilliBTC;
extern NSString *const WSBitcoinCurrencyCodeSatoshi;

@interface WSBitcoinCurrency : NSObject <WSCurrency>

+ (instancetype)currencyForCode:(NSString *)code;
+ (instancetype)referenceCurrency;
- (short)powerOf10;
- (BOOL)isReference;

- (NSDecimalNumber *)valueFromSatoshi:(uint64_t)satoshi;
- (NSDecimalNumber *)valueFromSatoshiNumber:(NSDecimalNumber *)satoshiNumber;
- (uint64_t)satoshiFromValue:(NSDecimalNumber *)value;
- (NSDecimalNumber *)satoshiNumberFromValue:(NSDecimalNumber *)value;

@end