/* -*- Mode: C; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* vim: set ts=2 et sw=2 tw=80: */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

/** Hindsight logging facility @file */

#ifndef hindsight_logger_h_
#define hindsight_logger_h_

extern const char* HS_APP_NAME;

// todo add an option to output Heka protobuf logs

/**
 * Initialize the log mutex
 *
 */
void hs_init_log();

/**
 * Destroy the log mutex
 *
 */
void hs_free_log();

/**
 * Hindsight log writer
 *
 * @param plugin
 * @param level
 * @param fmt
 */
void hs_log(const char* plugin, int level, const char* fmt, ...);

#endif
