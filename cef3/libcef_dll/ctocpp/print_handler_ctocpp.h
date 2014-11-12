// Copyright (c) 2014 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_PRINT_HANDLER_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_PRINT_HANDLER_CTOCPP_H_
#pragma once

#ifndef BUILDING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed DLL-side only")
#else  // BUILDING_CEF_SHARED

#include "include/cef_print_handler.h"
#include "include/capi/cef_print_handler_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefPrintHandlerCToCpp
    : public CefCToCpp<CefPrintHandlerCToCpp, CefPrintHandler,
        cef_print_handler_t> {
 public:
  explicit CefPrintHandlerCToCpp(cef_print_handler_t* str)
      : CefCToCpp<CefPrintHandlerCToCpp, CefPrintHandler, cef_print_handler_t>(
          str) {}

  // CefPrintHandler methods
  void OnPrintSettings(CefRefPtr<CefPrintSettings> settings,
      bool get_defaults) override;
  bool OnPrintDialog(bool has_selection,
      CefRefPtr<CefPrintDialogCallback> callback) override;
  bool OnPrintJob(const CefString& document_name,
      const CefString& pdf_file_path,
      CefRefPtr<CefPrintJobCallback> callback) override;
  void OnPrintReset() override;
};

#endif  // BUILDING_CEF_SHARED
#endif  // CEF_LIBCEF_DLL_CTOCPP_PRINT_HANDLER_CTOCPP_H_

